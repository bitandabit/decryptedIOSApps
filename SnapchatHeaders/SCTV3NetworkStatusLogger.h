//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTV3SessionWrapperListener-Protocol.h"

@class NSString;
@protocol SCTV3NetworkServices;

@interface SCTV3NetworkStatusLogger : NSObject <SCTV3SessionWrapperListener>
{
    id <SCTV3NetworkServices> _networkServices;
    id _token;
}

- (void).cxx_destruct;
- (void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3;
- (id)initWithNetworkServices:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

