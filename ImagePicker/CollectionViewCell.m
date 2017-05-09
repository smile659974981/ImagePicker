//
//  CollectionViewCell.m
//  ImagePicker
//
//  Created by 孑孓 on 2015/5/2.
//  Copyright © 2017年 王志杰. All rights reserved.
//

#import "CollectionViewCell.h"

@implementation CollectionViewCell

- (void)awakeFromNib
{
   // self.textLabel.backgroundColor = [UIColor colorWithRed:0 green:162.0f/255.0f blue:255.0f/255.0f alpha:0.5];
}

- (void)prepareForReuse
{
    self.imageView.image = nil;
    self.textLabel.text = nil;
}


@end
