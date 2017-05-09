//
//  DNAsset.h
//  ImagePicker
//
//  Created by 孑孓 on 2015/5/2.
//  Copyright © 2017年 王志杰. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface DNAsset : NSObject

@property (nonatomic, strong) NSURL *url;  //ALAsset url

- (BOOL)isEqualToAsset:(DNAsset *)asset;

@end
