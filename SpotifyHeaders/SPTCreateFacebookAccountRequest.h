//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"

@class NSData, NSString, NSURL, SPTDataLoader;

@interface SPTCreateFacebookAccountRequest : NSObject <SPTDataLoaderDelegate>
{
    NSURL *_endpointURL;
    SPTDataLoader *_dataLoader;
    NSData *_parameters;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, copy, nonatomic) NSData *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, copy, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
- (void).cxx_destruct;
- (void)executeCompletionCallbackOnMainThread:(id)arg1;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (id)userInfoFromResponse:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithEndpointURL:(id)arg1 parameters:(id)arg2 dataLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

