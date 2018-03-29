//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCAdsStories;

@interface SCSnapAdsPortalAd : NSObject
{
    NSString *_adId;
    SCAdsStories *_adsStories;
    long long _adsStoriesLoadStatus;
    NSString *_adsStoriesThumbnailKey;
    NSString *_responseJson;
}

+ (id)_requiredAdCreativePreviewProperties;
@property(readonly, copy, nonatomic) NSString *responseJson; // @synthesize responseJson=_responseJson;
@property(readonly, copy, nonatomic) NSString *adsStoriesThumbnailKey; // @synthesize adsStoriesThumbnailKey=_adsStoriesThumbnailKey;
@property(nonatomic) long long adsStoriesLoadStatus; // @synthesize adsStoriesLoadStatus=_adsStoriesLoadStatus;
@property(readonly, nonatomic) SCAdsStories *adsStories; // @synthesize adsStories=_adsStories;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (void).cxx_destruct;
- (void)_generateThumbnailKey;
- (void)_initAdsStories:(id)arg1;
- (_Bool)_isValidSOJUAd:(id)arg1 requiredProperties:(id)arg2;
- (_Bool)hasAdsStories;
- (id)getAdsStoryAtIndex:(long long)arg1;
- (void)fetchAdsStoriesWithUserSession:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initFromSOJUSnapAdsPortalAd:(id)arg1;

@end

