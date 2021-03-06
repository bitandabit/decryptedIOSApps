//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGeoFilter.h"

@class NSArray;
@protocol SCPerforming;

@interface SCDynamicGeoFilter : SCGeoFilter
{
    id <SCPerforming> _performer;
    NSArray *_dynamicResources;
}

@property(copy, nonatomic) NSArray *dynamicResources; // @synthesize dynamicResources=_dynamicResources;
- (void).cxx_destruct;
- (id)cacheKeyForCompositedImageWithContextData:(id)arg1 dynamicContextProperties:(id)arg2;
- (id)unhashedCacheKeyForCompositedImageWithContextData:(id)arg1 dynamicContextProperties:(id)arg2;
- (long long)geofilterMissLoggingType;
- (_Bool)_shouldFlattenImageLayers;
- (id)compositeGeoFilterImageWithBackgroundImage:(id)arg1 backgroundImageData:(id)arg2 andResourceImages:(id)arg3 andResourceRevisedLayouts:(id)arg4;
- (void)_fetchDataAndRenderImageWithCompletion:(CDUnknownBlockType)arg1 imageURLParamsMutator:(id)arg2 contextData:(id)arg3;
- (void)_onCacheMissWithContextData:(id)arg1 CFTimeInterval:(double)arg2 completion:(CDUnknownBlockType)arg3 mutator:(id)arg4 ratingStickerCreatives:(id)arg5;
- (void)loadRatingAssetsWithGroup:(id)arg1 fetchErrors:(id)arg2 ratingStickerCreatives:(id)arg3;
- (_Bool)hasRatingSticker;
- (void)prepareGeoFilterImageWithCompletion:(CDUnknownBlockType)arg1 imageURLParamsMutator:(id)arg2 contextData:(id)arg3;
- (id)imageLoadingKey:(id)arg1;
- (void)initPerformer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 isPreCached:(_Bool)arg2;
- (id)initWithLocationId:(id)arg1 geoFenceLocationPoints:(id)arg2 filterId:(id)arg3 expirationDate:(id)arg4 scaleSetting:(long long)arg5 positionSetting:(unsigned long long)arg6 isSponsored:(_Bool)arg7 sponsoredSlug:(id)arg8 targetingType:(unsigned long long)arg9 autoRefreshDelayInMilliseconds:(long long)arg10 autoRefreshLabelPosition:(struct CGPoint)arg11 dynamicFilterRefreshHint:(id)arg12 dynamicFilterUpdatingMessage:(id)arg13 belowDrawingLayer:(_Bool)arg14 isAnimated:(_Bool)arg15 encryptedGeoData:(id)arg16 unlockableContentType:(long long)arg17 isFrameFilter:(_Bool)arg18 unlockableTrackInfo:(id)arg19 imageURL:(id)arg20 imageURLParams:(id)arg21 dynamicResources:(id)arg22 dynamicContextProperties:(id)arg23 autoStacking:(long long)arg24;

@end

