//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCLens, SCPromise;

@interface SCLensDownloadOperationV2 : NSObject
{
    NSString *_operationId;
    SCLens *_lens;
    long long _requestTiming;
    SCPromise *_resultPromise;
    NSString *_enqueuedRequestId;
}

@property(copy, nonatomic) NSString *enqueuedRequestId; // @synthesize enqueuedRequestId=_enqueuedRequestId;
@property(readonly, nonatomic) SCPromise *resultPromise; // @synthesize resultPromise=_resultPromise;
@property(readonly, nonatomic) long long requestTiming; // @synthesize requestTiming=_requestTiming;
@property(readonly, nonatomic) SCLens *lens; // @synthesize lens=_lens;
@property(readonly, copy, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)finishWithFailure:(id)arg1 settings:(id)arg2;
- (void)finishWithSuccess:(id)arg1 settings:(id)arg2;
- (void)finishWithResult:(id)arg1;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2;

@end

