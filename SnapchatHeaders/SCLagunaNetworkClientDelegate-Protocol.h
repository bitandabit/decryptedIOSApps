//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SCLagunaNetworkResponseMessage;
@protocol SCLagunaNetworkClient;

@protocol SCLagunaNetworkClientDelegate <NSObject>
- (void)networkClientDidTimeOut:(id <SCLagunaNetworkClient>)arg1;
- (void)networkClient:(id <SCLagunaNetworkClient>)arg1 didError:(NSError *)arg2;
- (void)networkClientDidCompleteRequest:(id <SCLagunaNetworkClient>)arg1;
- (void)networkClient:(id <SCLagunaNetworkClient>)arg1 didReceiveNetworkResponse:(SCLagunaNetworkResponseMessage *)arg2;
- (void)networkClientDidBecomeActive:(id <SCLagunaNetworkClient>)arg1;
@end

