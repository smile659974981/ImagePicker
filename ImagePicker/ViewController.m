//
//  ViewController.m
//  ImagePicker
//
//  Created by 孑孓 on 2015/5/2.
//  Copyright © 2017年 王志杰. All rights reserved.
//

#import "ViewController.h"
#import "DNImagePickerController.h"
#import "CollectionViewController.h"

@interface ViewController () <DNImagePickerControllerDelegate>
@property (nonatomic, strong) NSMutableArray *assetsArray;

@property (nonatomic, weak) IBOutlet UIButton *button;
- (IBAction)buttonAction:(id)sender;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.button setTitle:NSLocalizedString(@"add", @"add") forState:UIControlStateNormal];
    self.title = @"WZJImagePicker";
}

- (void)buttonAction:(id)sender
{
    DNImagePickerController *imagePicker = [[DNImagePickerController alloc] init];
    imagePicker.imagePickerDelegate = self;
    [self presentViewController:imagePicker animated:YES completion:nil];
}

#pragma mark - DNImagePickerControllerDelegate

- (void)dnImagePickerController:(DNImagePickerController *)imagePickerController sendImages:(NSArray *)imageAssets isFullImage:(BOOL)fullImage
{
    self.assetsArray = [NSMutableArray arrayWithArray:imageAssets];
    CollectionViewController *collectionVC = [self.storyboard instantiateViewControllerWithIdentifier:@"CollectionViewController"];
    collectionVC.isFullImage = fullImage;
    collectionVC.imageArray = imageAssets;
    [self.navigationController pushViewController:collectionVC animated:YES];
}

- (void)dnImagePickerControllerDidCancel:(DNImagePickerController *)imagePicker
{
    [imagePicker dismissViewControllerAnimated:YES completion:^{
        
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
