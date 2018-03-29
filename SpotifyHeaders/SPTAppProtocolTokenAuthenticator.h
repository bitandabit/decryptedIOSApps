//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAppProtocolAuthenticator.h"
#import "SPTDataLoaderDelegate.h"

@class NSString, SPTDataLoader;

@interface SPTAppProtocolTokenAuthenticator : NSObject <SPTDataLoaderDelegate, SPTAppProtocolAuthenticator>
{
    id <SPTAppProtocolAuthenticatorDelegate> _delegate;
    SPTDataLoader *_dataLoader;
}

@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTAppProtocolAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)handleAuthenticateMessage:(id)arg1 forSessionWithID:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;
- (void)handleHelloMessage:(id)arg1 forSessionWithID:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) NSString *methodName;
- (id)initWithDataLoaderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

