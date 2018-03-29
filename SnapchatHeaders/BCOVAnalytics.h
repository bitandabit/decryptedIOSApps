//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BCOVMutableAnalytics-Protocol.h"
#import "BCOVPlaybackSessionConsumerPrivate-Protocol.h"

@class BCOVAnalyticsSession, BCOVAnalyticsSessionDigester, NSString;

@interface BCOVAnalytics : NSObject <BCOVPlaybackSessionConsumerPrivate, BCOVMutableAnalytics>
{
    _Bool _uniqueIdentifierEnabled;
    NSString *_destination;
    NSString *_source;
    NSString *_account;
    BCOVAnalyticsSessionDigester *_sessionDigester;
    BCOVAnalyticsSession *_currentAnalyticsSession;
}

+ (id)sharedSessionId;
+ (id)stockPropertiesForSession:(id)arg1;
@property(retain, nonatomic) BCOVAnalyticsSession *currentAnalyticsSession; // @synthesize currentAnalyticsSession=_currentAnalyticsSession;
@property(readonly, nonatomic) BCOVAnalyticsSessionDigester *sessionDigester; // @synthesize sessionDigester=_sessionDigester;
@property(nonatomic, getter=isUniqueIdentifierEnabled) _Bool uniqueIdentifierEnabled; // @synthesize uniqueIdentifierEnabled=_uniqueIdentifierEnabled;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (id)addSessionSpecificAnalyticsPropertiesForSession:(id)arg1;
- (void)didSetVideos:(id)arg1;
- (void)didAdvanceToPlaybackSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

