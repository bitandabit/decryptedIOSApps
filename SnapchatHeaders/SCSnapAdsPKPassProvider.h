//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaWebViewPKPassProvider-Protocol.h"

@class NSString, SCRequest;

@interface SCSnapAdsPKPassProvider : NSObject <SCOperaWebViewPKPassProvider>
{
    SCRequest *_currentRequest;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1 forPKAddPassesViewController:(id)arg2;
- (id)createPKAddPassesViewControllerForPKPass:(id)arg1;
- (void)fetchPKPassForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

