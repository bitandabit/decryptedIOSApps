//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeedbackManager.h"

@class NSString;

@interface SPTFeedbackManagerImplementation : NSObject <SPTFeedbackManager>
{
    id <SPTResolver> _resolver;
}

@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)removeFeedbackForEntityURI:(id)arg1 onContextURI:(id)arg2 viewURI:(id)arg3 reason:(id)arg4 backendURL:(id)arg5 feature:(id)arg6 actions:(id)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (void)dislikeEntityURI:(id)arg1 onContextURI:(id)arg2 viewURI:(id)arg3 reason:(id)arg4 backendURL:(id)arg5 feature:(id)arg6 actions:(id)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (void)likeEntityURI:(id)arg1 onContextURI:(id)arg2 viewURI:(id)arg3 reason:(id)arg4 backendURL:(id)arg5 feature:(id)arg6 actions:(id)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

