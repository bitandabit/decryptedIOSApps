//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubRemoteContentURLResolver.h"

@class NSString, SPTDrivingTestManager;

@interface SPTDrivingRemoteContentURLResolver : NSObject <SPTHubRemoteContentURLResolver>
{
    id <SPTProductState> _productState;
    SPTDrivingTestManager *_testManager;
}

@property(readonly, nonatomic) SPTDrivingTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (id)endpointPathForViewURI:(id)arg1 forExternalData:(_Bool)arg2;
- (id)remoteHubContentURLForEndpointPath:(id)arg1 forExternalData:(_Bool)arg2;
- (id)remoteHubContentURLForViewURI:(id)arg1;
- (id)initWithProductState:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
