//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SCLRUCache, SCUserSession;
@protocol OS_dispatch_queue;

@interface SCCommerceImageManager : NSObject
{
    SCUserSession *_userSession;
    NSMutableDictionary *_requestsCallbacks;
    SCLRUCache *_productImagesCache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)addImage:(id)arg1 contentImageLink:(id)arg2;
- (void)requestResourceImageLink:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)runCallbacksWithImage:(id)arg1 imageLink:(id)arg2;
- (void)removeAllCallbacksForImageLink:(id)arg1;
- (unsigned long long)addCallback:(CDUnknownBlockType)arg1 forImageLink:(id)arg2;
- (void)fetchImageWithSrcUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchImagesForProduct:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end
