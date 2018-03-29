//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_SPTHubInteractionLogger.h"

@class NSString;

@interface EXP_SPTHubInteractionLoggerImplementation : NSObject <EXP_SPTHubInteractionLogger>
{
    id <SPTLogCenterProtocol> _logCenter;
    NSString *_featureIdentifier;
    NSString *_viewURIString;
}

@property(readonly, copy, nonatomic) NSString *viewURIString; // @synthesize viewURIString=_viewURIString;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logInteractionWithURI:(id)arg1 event:(id)arg2 userIntent:(id)arg3;
- (id)initWithLogCenter:(id)arg1 featureIdentifier:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
