//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCConnectionClassManagerListener-Protocol.h"

@class NSString;

@interface SCRequestManagerConfiguration : NSObject <SCConnectionClassManagerListener>
{
    unsigned long long _maxLargeRequests;
    unsigned long long _maxInContextMsgLargeRequests;
    unsigned long long _maxLargeRequestsFromSingleContext;
    unsigned long long _maxSmallRequests;
    unsigned long long _maxSmallRequestsForMap;
    unsigned long long _maxSmallRequestsForCognac;
    unsigned long long _maxOutOfContextLargeRequests;
    unsigned long long _maxLensRequests;
    unsigned long long _maxOutOfContextSmallRequests;
}

+ (id)shared;
@property(readonly) unsigned long long maxOutOfContextSmallRequests; // @synthesize maxOutOfContextSmallRequests=_maxOutOfContextSmallRequests;
@property unsigned long long maxLensRequests; // @synthesize maxLensRequests=_maxLensRequests;
@property unsigned long long maxOutOfContextLargeRequests; // @synthesize maxOutOfContextLargeRequests=_maxOutOfContextLargeRequests;
@property(readonly) unsigned long long maxSmallRequestsForCognac; // @synthesize maxSmallRequestsForCognac=_maxSmallRequestsForCognac;
@property(readonly) unsigned long long maxSmallRequestsForMap; // @synthesize maxSmallRequestsForMap=_maxSmallRequestsForMap;
@property unsigned long long maxSmallRequests; // @synthesize maxSmallRequests=_maxSmallRequests;
@property unsigned long long maxLargeRequestsFromSingleContext; // @synthesize maxLargeRequestsFromSingleContext=_maxLargeRequestsFromSingleContext;
@property unsigned long long maxInContextMsgLargeRequests; // @synthesize maxInContextMsgLargeRequests=_maxInContextMsgLargeRequests;
@property unsigned long long maxLargeRequests; // @synthesize maxLargeRequests=_maxLargeRequests;
- (void)_updateRequestManagerSettings:(id)arg1;
- (void)connectionClassDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

