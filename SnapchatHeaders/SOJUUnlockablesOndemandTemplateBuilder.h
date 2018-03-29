//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, SOJUGeofilterResponse;

@interface SOJUUnlockablesOndemandTemplateBuilder : NSObject
{
    NSString *_imageUrl;
    NSString *_thumbnailUrl;
    NSArray *_backgroundImageUrls;
    NSString *_defaultFontName;
    NSString *_defaultFontUrl;
    NSNumber *_defaultWidth;
    NSNumber *_defaultHeight;
    NSString *_productType;
    NSString *_idValue;
    NSString *_categoryId;
    NSArray *_textBoxSpecArray;
    NSString *_instanceId;
    NSNumber *_baseLensGeofilterId;
    NSString *_smallLensPreviewImageUrl;
    SOJUGeofilterResponse *_baseLensGeofilterResponse;
}

+ (id)withJUUnlockablesOndemandTemplate:(id)arg1;
- (void).cxx_destruct;
- (id)setBaseLensGeofilterResponse:(id)arg1;
- (id)setSmallLensPreviewImageUrl:(id)arg1;
- (id)setBaseLensGeofilterId:(id)arg1;
- (id)setInstanceId:(id)arg1;
- (id)setTextBoxSpecArray:(id)arg1;
- (id)setCategoryId:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setProductType:(id)arg1;
- (id)setDefaultHeight:(id)arg1;
- (id)setDefaultWidth:(id)arg1;
- (id)setDefaultFontUrl:(id)arg1;
- (id)setDefaultFontName:(id)arg1;
- (id)setBackgroundImageUrls:(id)arg1;
- (id)setThumbnailUrl:(id)arg1;
- (id)setImageUrl:(id)arg1;
- (id)build;
- (id)setBaseLensGeofilterIdValue:(long long)arg1;
- (id)setProductTypeEnum:(long long)arg1;
- (id)setDefaultHeightValue:(int)arg1;
- (id)setDefaultWidthValue:(int)arg1;

@end

