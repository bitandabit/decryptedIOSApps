//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, SCSerengetiRegistry, SCUserSession;
@protocol SCSerengetiRegistryProviding, SCSerengetiURLResolverDelegate;

@interface SCSerengetiURLResolver : NSObject
{
    NSURL *_url;
    SCSerengetiRegistry *_registry;
    id <SCSerengetiRegistryProviding> _registryProvider;
    SCUserSession *_userSession;
    _Bool _cancelled;
    id <SCSerengetiURLResolverDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSerengetiURLResolverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (void)_didLoadResolvedService:(id)arg1 shouldRevalidate:(_Bool)arg2 didReloadRegistry:(_Bool)arg3;
- (void)_reloadRegistryWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 registry:(id)arg2 regisitryProvider:(id)arg3 userSession:(id)arg4;

@end

