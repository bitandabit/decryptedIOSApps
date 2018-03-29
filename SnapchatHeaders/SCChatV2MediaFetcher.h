//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SCChatV2MediaFetcherDelegate;

@interface SCChatV2MediaFetcher : NSObject
{
    id <SCChatV2MediaFetcherDelegate> _delegate;
}

+ (_Bool)isConversationBasedRequestContextsEnabled;
- (void).cxx_destruct;
- (void)_logSnapTapToLoadEnded:(id)arg1 error:(id)arg2 userInitiated:(_Bool)arg3;
- (id)_requestMediaTypeFromSnap:(id)arg1;
- (void)loadSnap:(id)arg1 userInitiated:(_Bool)arg2;
- (_Bool)loadTextMessageIfNecessary:(id)arg1 userSession:(id)arg2;
- (_Bool)prefetchBitmojiIfNecessary:(id)arg1;
- (_Bool)prefetchMediaMessageIfNecessary:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
