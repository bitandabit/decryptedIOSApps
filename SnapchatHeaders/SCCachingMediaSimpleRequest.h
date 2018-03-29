//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCachingMediaRequest-Protocol.h"
#import "SCProgressReporting-Protocol.h"

@class NSString, SCSentinel;
@protocol SCProgressReceiving;

@interface SCCachingMediaSimpleRequest : NSObject <SCCachingMediaRequest, SCProgressReporting>
{
    SCSentinel *_sentinel;
    id <SCProgressReceiving> _progressReceiver;
}

@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;
- (void).cxx_destruct;
- (void)cancel;
- (_Bool)isCancelled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
