//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLogCenterProtocol.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, SPTStartupTracer;

@interface SPTLogCenter : NSObject <SPTLogCenterProtocol>
{
    NSString *_anonymousToken;
    NSMutableArray *_messages;
    id <SPTLogger> _logger;
    NSObject<OS_dispatch_queue> *_queue;
    SPTStartupTracer *_startupTracer;
}

+ (id)defaultCenter;
@property(retain, nonatomic) SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPTLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain) NSString *anonymousToken; // @synthesize anonymousToken=_anonymousToken;
- (void).cxx_destruct;
- (_Bool)sendMessageWithSequenceNumber:(id)arg1 messageName:(id)arg2;
- (_Bool)updateMessageWithSequenceNumber:(id)arg1 messageName:(id)arg2 message:(id)arg3;
- (id)createMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)init;
- (void)internalSetup:(id)arg1 startupTracer:(id)arg2;
- (void)unsetLogger;
- (void)setup:(id)arg1 startupTracer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

