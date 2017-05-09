//
//  DNBrowserCell.h
//  ImagePicker
//
//  Created by 孑孓 on 2015/5/2.
//  Copyright © 2017年 王志杰. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
@class DNPhotoBrowser;

@interface DNBrowserCell : UICollectionViewCell

@property (nonatomic, weak) DNPhotoBrowser *photoBrowser;

@property (nonatomic, strong) ALAsset *asset;

@end
