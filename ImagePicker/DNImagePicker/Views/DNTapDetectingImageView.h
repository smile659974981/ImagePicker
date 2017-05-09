//
//  DNTapDetectingImageView.h
//  ImagePicker
//  ImagePicker
//
//  Created by 孑孓 on 2015/5/2.
//  Copyright © 2017年 王志杰. All rights reserved.
//
#import <UIKit/UIKit.h>

@protocol DNTapDetectingImageViewDelegate <NSObject>

@optional

- (void)imageView:(UIImageView *)imageView singleTapDetected:(UITouch *)touch;
- (void)imageView:(UIImageView *)imageView doubleTapDetected:(UITouch *)touch;
- (void)imageView:(UIImageView *)imageView tripleTapDetected:(UITouch *)touch;

@end

@interface DNTapDetectingImageView : UIImageView
@property (nonatomic, weak) id <DNTapDetectingImageViewDelegate> tapDelegate;
@end
