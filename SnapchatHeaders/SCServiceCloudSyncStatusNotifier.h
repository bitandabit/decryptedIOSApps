//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCloudSyncStatusListener-Protocol.h"
#import "SCServiceNotifier-Protocol.h"

@class NSString;

@interface SCServiceCloudSyncStatusNotifier : NSObject <SCServiceNotifier, SCCloudSyncStatusListener>
{
    _Bool _isNotifierForReadyStatus;
    unsigned long long _status;
    double _waitTime;
}

+ (id)notifierForFullySyncedStatus:(id)arg1;
+ (id)notifierForStatus:(unsigned long long)arg1 cloudSync:(id)arg2;
- (double)waitUntil:(double)arg1;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

