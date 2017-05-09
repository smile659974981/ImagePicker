//
//  DNAssetsViewCell.h
//  ImagePicker
//
//  Created by 孑孓 on 2015/5/2.
//  Copyright © 2017年 王志杰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/ALAsset.h>

@class DNAssetsViewCell;

@protocol DNAssetsViewCellDelegate <NSObject>
@optional

- (void)didSelectItemAssetsViewCell:(DNAssetsViewCell *)assetsCell;
- (void)didDeselectItemAssetsViewCell:(DNAssetsViewCell *)assetsCell;
@end

@interface DNAssetsViewCell : UICollectionViewCell

@property (nonatomic, strong) ALAsset *asset;
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, weak) id<DNAssetsViewCellDelegate> delegate;

- (void)fillWithAsset:(ALAsset *)asset isSelected:(BOOL)seleted;

@end
