//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierSignupFieldValidator.h"

@class NSString, SPTDataLoader, SPTFreeTierSignupResponseProcessor;

@interface SPTFreeTierSignupEmailBackendValidator : NSObject <SPTFreeTierSignupFieldValidator>
{
    SPTDataLoader *_dataLoader;
    SPTFreeTierSignupResponseProcessor *_responseProcessor;
}

@property(retain, nonatomic) SPTFreeTierSignupResponseProcessor *responseProcessor; // @synthesize responseProcessor=_responseProcessor;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)performRequestWithEmail:(id)arg1;
- (void)validateObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithDataLoader:(id)arg1 responseProcessor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

