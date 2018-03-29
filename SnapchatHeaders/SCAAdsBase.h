//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSDate, NSString;

@interface SCAAdsBase : NSObject <NamedEvent, NSCopying>
{
    NSString *idForAdvertising;
    NSString *requestId;
    NSString *clientRequestId;
    NSString *environment;
    NSString *serveItemId;
    NSString *serveAuctionerVersion;
    NSString *serveShardVersion;
    NSString *gcpRegion;
    NSDate *serverTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getServerTs;
- (void)setServerTs:(id)arg1;
- (id)getGcpRegion;
- (void)setGcpRegion:(id)arg1;
- (id)getServeShardVersion;
- (void)setServeShardVersion:(id)arg1;
- (id)getServeAuctionerVersion;
- (void)setServeAuctionerVersion:(id)arg1;
- (id)getServeItemId;
- (void)setServeItemId:(id)arg1;
- (id)getEnvironment;
- (void)setEnvironment:(id)arg1;
- (id)getClientRequestId;
- (void)setClientRequestId:(id)arg1;
- (id)getRequestId;
- (void)setRequestId:(id)arg1;
- (id)getIdForAdvertising;
- (void)setIdForAdvertising:(id)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

