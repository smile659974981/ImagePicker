//
//  DNSendButton.h
//  ImagePicker
//
//  Created by 孑孓 on 2015/5/2.
//  Copyright © 2017年 王志杰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DNSendButton : UIView

@property (nonatomic, copy) NSString *badgeValue;

- (instancetype)initWithFrame:(CGRect)frame;

- (void)addTaget:(id)target action:(SEL)action;

@end
