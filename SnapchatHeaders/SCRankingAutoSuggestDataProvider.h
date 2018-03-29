//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSString, SCSessionRequestManager;

@interface SCRankingAutoSuggestDataProvider : NSObject
{
    NSString *_requestKey;
    NSCache *_cache;
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)parseSuggestions:(id)arg1 keyword:(id)arg2 location:(id)arg3 successBlock:(CDUnknownBlockType)arg4;
- (void)fetchFromNetwork:(id)arg1 location:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)prefetchSuggestions;
- (id)cachedSuggestionsWithKeyword:(id)arg1;
- (void)fetchSuggestionsWithKeyword:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (id)initWithRequestManager:(id)arg1;

@end

