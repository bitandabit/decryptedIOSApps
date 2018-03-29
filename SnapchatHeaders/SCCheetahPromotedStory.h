//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCSearchNetworkImage, SCSnapAdsAdResponse;

@interface SCCheetahPromotedStory : NSObject <NSCopying, NSCoding>
{
    NSString *_headline;
    NSArray *_snaps;
    SCSearchNetworkImage *_icon;
    SCSearchNetworkImage *_thumbnail;
    NSString *_requestId;
    NSString *_serveItemId;
    NSString *_brandName;
    NSString *_adId;
    SCSnapAdsAdResponse *_adResponse;
    NSString *_trackUrl;
    NSString *_rawUserData;
    NSString *_rawAdData;
    NSArray *_thirdPartyImpressionTrackUrls;
}

@property(readonly, copy, nonatomic) NSArray *thirdPartyImpressionTrackUrls; // @synthesize thirdPartyImpressionTrackUrls=_thirdPartyImpressionTrackUrls;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *rawUserData; // @synthesize rawUserData=_rawUserData;
@property(readonly, copy, nonatomic) NSString *trackUrl; // @synthesize trackUrl=_trackUrl;
@property(readonly, copy, nonatomic) SCSnapAdsAdResponse *adResponse; // @synthesize adResponse=_adResponse;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(readonly, copy, nonatomic) NSString *serveItemId; // @synthesize serveItemId=_serveItemId;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) SCSearchNetworkImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) SCSearchNetworkImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeadline:(id)arg1 snaps:(id)arg2 icon:(id)arg3 thumbnail:(id)arg4 requestId:(id)arg5 serveItemId:(id)arg6 brandName:(id)arg7 adId:(id)arg8 adResponse:(id)arg9 trackUrl:(id)arg10 rawUserData:(id)arg11 rawAdData:(id)arg12 thirdPartyImpressionTrackUrls:(id)arg13;
- (id)initWithCoder:(id)arg1;

@end

