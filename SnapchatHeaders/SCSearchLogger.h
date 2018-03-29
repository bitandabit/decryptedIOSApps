//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchEventListener-Protocol.h"
#import "SCSearchLoggingHelperDelegate-Protocol.h"

@class NSDictionary, NSString, SCSearchGeneralLoggingHelper;
@protocol SCPerforming;

@interface SCSearchLogger : NSObject <SCSearchEventListener, SCSearchLoggingHelperDelegate>
{
    id <SCPerforming> _performer;
    SCSearchGeneralLoggingHelper *_generalHelper;
    NSDictionary *_samplingRates;
    NSDictionary *_loggingDestination;
    NSDictionary *_loggingAdaptersByAnnouncerIdentifiers;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_resetGeneralHelperData;
- (id)_getUserLanguagePrefencesString;
- (_Bool)_shouldLogSampleForEvent:(id)arg1;
- (void)_batchLogOnScreenResultEventsWithExtraData:(id)arg1 destination:(long long)arg2;
- (long long)getQueryId;
- (id)_getExtraDataForEvent:(id)arg1 identifier:(id)arg2 extraData:(id)arg3;
- (void)announceQueryWithExtraData:(id)arg1;
- (void)_logEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)resetData;
- (void)logEventWithEventName:(id)arg1 extraData:(id)arg2;
- (void)applyLoggingConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
