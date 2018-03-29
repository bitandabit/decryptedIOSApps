//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SOJUDynamicContentSetting, SOJUUnlockablesArSegmentationFilter, SOJUUnlockablesAutoStacking, SOJUUnlockablesCarouselGroup;

@interface SOJUGalleryGeoFilterBuilder : NSObject
{
    NSString *_type;
    NSString *_unlockableContentType;
    NSString *_idValue;
    NSString *_imageUrl;
    NSDictionary *_imageUrlParams;
    NSArray *_dynamicContent;
    NSString *_scaleSetting;
    NSString *_positionSetting;
    NSNumber *_belowDrawingLayer;
    NSNumber *_isSponsored;
    NSArray *_geofilterMarkups;
    SOJUDynamicContentSetting *_dynamicContentSetting;
    SOJUUnlockablesAutoStacking *_autoStacking;
    NSNumber *_isAnimated;
    SOJUUnlockablesArSegmentationFilter *_arSegmentation;
    SOJUUnlockablesCarouselGroup *_carouselGroup;
}

+ (id)withJUGalleryGeoFilter:(id)arg1;
- (void).cxx_destruct;
- (id)setCarouselGroup:(id)arg1;
- (id)setArSegmentation:(id)arg1;
- (id)setIsAnimated:(id)arg1;
- (id)setAutoStacking:(id)arg1;
- (id)setDynamicContentSetting:(id)arg1;
- (id)setGeofilterMarkups:(id)arg1;
- (id)setIsSponsored:(id)arg1;
- (id)setBelowDrawingLayer:(id)arg1;
- (id)setPositionSetting:(id)arg1;
- (id)setScaleSetting:(id)arg1;
- (id)setDynamicContent:(id)arg1;
- (id)setImageUrlParams:(id)arg1;
- (id)setImageUrl:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setUnlockableContentType:(id)arg1;
- (id)setType:(id)arg1;
- (id)build;
- (id)setIsAnimatedValue:(_Bool)arg1;
- (id)setIsSponsoredValue:(_Bool)arg1;
- (id)setBelowDrawingLayerValue:(_Bool)arg1;
- (id)setPositionSettingEnum:(long long)arg1;
- (id)setScaleSettingEnum:(long long)arg1;
- (id)setUnlockableContentTypeEnum:(long long)arg1;
- (id)setTypeEnum:(long long)arg1;

@end

