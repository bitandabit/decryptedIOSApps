//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScopeCoordinator.h"

#import "SCUserSessionStateSubWorkflowsDelegate-Protocol.h"

@class SCSubScopeExposer, SCUserSessionScope, SCUserSessionStateWorkflow;

@interface SCUserSessionStateScopeCoordinator : SCScopeCoordinator <SCUserSessionStateSubWorkflowsDelegate>
{
    SCUserSessionStateWorkflow *_userSessionStateWorkflow;
    SCUserSessionScope *_userSessionScope;
    SCSubScopeExposer *_activeUserSessionScopeExposer;
    SCSubScopeExposer *_termsOfUseScopeExposer;
    SCSubScopeExposer *_abuseWarningScopeExposer;
}

@property(retain, nonatomic) SCSubScopeExposer *abuseWarningScopeExposer; // @synthesize abuseWarningScopeExposer=_abuseWarningScopeExposer;
@property(retain, nonatomic) SCSubScopeExposer *termsOfUseScopeExposer; // @synthesize termsOfUseScopeExposer=_termsOfUseScopeExposer;
@property(retain, nonatomic) SCSubScopeExposer *activeUserSessionScopeExposer; // @synthesize activeUserSessionScopeExposer=_activeUserSessionScopeExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)endAbuseWarningWorkflow;
- (void)beginAbuseWarningWorkflowForUserSession:(id)arg1 abuseWarningId:(id)arg2 abuseWarningMessage:(id)arg3 delegate:(id)arg4;
- (void)endTermsOfUseWorkflow;
- (void)beginTermsOfUseWorkflowForUserSession:(id)arg1 delegate:(id)arg2;
- (void)endActiveUserSessionWorkflow;
- (void)beginActiveUserSessionWorkflow:(id)arg1 userSessionContext:(unsigned long long)arg2 delegate:(id)arg3;
- (void)begin;

@end

