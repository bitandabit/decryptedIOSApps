//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SCCloudSyncTriggerUserContextBuilder : NSObject
{
    NSString *_source;
    NSString *_action;
    NSDate *_startTime;
    NSString *_parentContext;
    NSString *_savingEventUuid;
}

+ (id)withCloudSyncTriggerUserContext:(id)arg1;
- (void).cxx_destruct;
- (id)setSavingEventUuid:(id)arg1;
- (id)setParentContext:(id)arg1;
- (id)setStartTime:(id)arg1;
- (id)setAction:(id)arg1;
- (id)setSource:(id)arg1;
- (id)build;

@end
