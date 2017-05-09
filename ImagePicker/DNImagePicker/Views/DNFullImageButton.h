//
//  DNFullImageButton.h
//  ImagePicker
//
//  Created by 孑孓 on 2015/5/2.
//  Copyright © 2017年 王志杰. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface DNFullImageButton : UIView

@property (nonatomic, assign) BOOL selected;
@property (nonatomic, copy) NSString *text;

- (instancetype)initWithFrame:(CGRect)frame;
- (void)addTarget:(id)target action:(SEL)action;
- (void)shouldAnimating:(BOOL)animate;
@end
