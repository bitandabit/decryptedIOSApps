//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaHtmlProvider-Protocol.h"

@class NSCache;

@interface SCSearchOperaDebugInfoProvider : NSObject <SCOperaHtmlProvider>
{
    NSCache *_cache;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)clearCache;
- (void)htmlStringForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
