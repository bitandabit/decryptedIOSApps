//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFollowFeatureLogger.h"

@class NSString;

@interface SPTFollowFeatureLoggerImplementation : NSObject <SPTFollowFeatureLogger>
{
    id <SPTLogCenterProtocol> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logFollowIntent:(unsigned long long)arg1 feature:(id)arg2 pageURI:(id)arg3 targetURI:(id)arg4;
- (id)initWithLogCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
