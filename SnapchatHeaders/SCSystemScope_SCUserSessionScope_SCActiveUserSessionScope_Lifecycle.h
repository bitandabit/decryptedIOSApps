//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCScopeContainer, SCSystemScope_SCUserSessionScope_Lifecycle;

@interface SCSystemScope_SCUserSessionScope_SCActiveUserSessionScope_Lifecycle : SCScopeLifecycle
{
    SCSystemScope_SCUserSessionScope_Lifecycle *_parent;
    SCScopeContainer *_activeUserSessionScopeContainer;
    SCScopeContainer *_legacyDeepLinkScopeContainer;
    SCScopeContainer *_legacyProfileScopeContainer;
    SCScopeContainer *_navigationScopeContainer;
}

@property(readonly, nonatomic) SCScopeContainer *navigationScopeContainer; // @synthesize navigationScopeContainer=_navigationScopeContainer;
@property(readonly, nonatomic) SCScopeContainer *legacyProfileScopeContainer; // @synthesize legacyProfileScopeContainer=_legacyProfileScopeContainer;
@property(readonly, nonatomic) SCScopeContainer *legacyDeepLinkScopeContainer; // @synthesize legacyDeepLinkScopeContainer=_legacyDeepLinkScopeContainer;
@property(readonly, nonatomic) SCScopeContainer *activeUserSessionScopeContainer; // @synthesize activeUserSessionScopeContainer=_activeUserSessionScopeContainer;
@property(nonatomic) __weak SCSystemScope_SCUserSessionScope_Lifecycle *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)begin;
- (id)rootScopeContainer;
- (void)setRootScope:(id)arg1;
- (void)cleanScopeContainers;
- (void)initializeScopeContainers;

@end

