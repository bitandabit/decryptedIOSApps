//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapAdsBaseEvent.h"

@class NSArray, NSString, SCSnapAdsIdentifier;

@interface SCCheetahPromotedStoriesAdTrackEvent : SCSnapAdsBaseEvent
{
    SCSnapAdsIdentifier *_adIdentifier;
    NSArray *_trackedUrls;
    NSString *_sessionId;
}

@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSArray *trackedUrls; // @synthesize trackedUrls=_trackedUrls;
@property(retain, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
- (void).cxx_destruct;

@end

