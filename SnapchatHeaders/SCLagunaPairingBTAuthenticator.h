//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCLagunaNetworkClientDelegate-Protocol.h"

@class NSArray, NSString, SCLagunaMfiAuthenticator;
@protocol SCLagunaNetworkClient, SCLagunaPairingBTAuthenticatorDelegate;

@interface SCLagunaPairingBTAuthenticator : NSObject <SCLagunaNetworkClientDelegate>
{
    int _currentOperation;
    id <SCLagunaNetworkClient> _client;
    id <SCLagunaPairingBTAuthenticatorDelegate> _delegate;
    SCLagunaMfiAuthenticator *_authenticator;
    NSArray *_authProviders;
}

@property(retain, nonatomic) NSArray *authProviders; // @synthesize authProviders=_authProviders;
@property(retain, nonatomic) SCLagunaMfiAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(nonatomic) int currentOperation; // @synthesize currentOperation=_currentOperation;
@property(nonatomic) __weak id <SCLagunaPairingBTAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCLagunaNetworkClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)networkClientDidTimeOut:(id)arg1;
- (void)networkClient:(id)arg1 didError:(id)arg2;
- (void)networkClientDidCompleteRequest:(id)arg1;
- (void)networkClient:(id)arg1 didReceiveNetworkResponse:(id)arg2;
- (void)networkClientDidBecomeActive:(id)arg1;
- (void)_sendAuthRequest:(int)arg1 withData:(id)arg2;
- (id)initWithAccessory:(id)arg1 encryptionKey:(id)arg2 authProviders:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

