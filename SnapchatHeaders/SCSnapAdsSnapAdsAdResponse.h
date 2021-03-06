//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCSnapAdsAdResponse, SOJUAdTargeting;

@interface SCSnapAdsSnapAdsAdResponse : NSObject
{
    long long _trackSequenceNumber;
    long long _attemptSequenceNumber;
    SOJUAdTargeting *_requestTargeting;
    SCSnapAdsAdResponse *_adResponse;
    NSString *_requestId;
    NSString *_rawAdData;
    NSString *_trackUrl;
    NSString *_trackAndGetUrl;
}

@property(readonly, copy, nonatomic) NSString *trackAndGetUrl; // @synthesize trackAndGetUrl=_trackAndGetUrl;
@property(readonly, copy, nonatomic) NSString *trackUrl; // @synthesize trackUrl=_trackUrl;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, nonatomic) SCSnapAdsAdResponse *adResponse; // @synthesize adResponse=_adResponse;
@property(readonly, nonatomic) SOJUAdTargeting *requestTargeting; // @synthesize requestTargeting=_requestTargeting;
- (void).cxx_destruct;
- (long long)getAndIncrementAttemptSequenceNumber;
- (long long)getAndIncrementTrackSequenceNumber;
- (id)initWithRequestId:(id)arg1 rawAdData:(id)arg2 trackUrl:(id)arg3 trackAndGetUrl:(id)arg4 adResponse:(id)arg5 requestTargeting:(id)arg6;

@end

