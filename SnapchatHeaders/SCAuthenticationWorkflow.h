//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCDataUnavailableWorkflowDelegate-Protocol.h"
#import "SCUnauthenticatedWorkflowDelegate-Protocol.h"
#import "SCUserSessionWorkflowDelegate-Protocol.h"

@class NSString;
@protocol SCApplicationDataChecker, SCAuthenticationSubWorkflowsDelegate, SCUserSessionVerificationRepository;

@interface SCAuthenticationWorkflow : NSObject <SCDataUnavailableWorkflowDelegate, SCUnauthenticatedWorkflowDelegate, SCUserSessionWorkflowDelegate>
{
    id <SCApplicationDataChecker> _applicationDataChecker;
    id <SCUserSessionVerificationRepository> _userSessionVerificationRepository;
    id <SCAuthenticationSubWorkflowsDelegate> _subWorkflowsDelegate;
}

- (void).cxx_destruct;
- (void)dataUnavailableWorkflowEndedWithDataAvailable;
- (void)userSessionWorkflowEndedCurrentUserSession;
- (void)unauthenticatedWorkflowCreatedUserSession:(id)arg1 context:(unsigned long long)arg2;
- (void)_beginWorkflowWithUserSession:(id)arg1 isVerified:(_Bool)arg2 context:(unsigned long long)arg3;
- (void)_resumePreviousWorkflow;
- (void)beginWorkflow;
- (id)initWithApplicationDataChecker:(id)arg1 userSessionVerificationRepository:(id)arg2 subWorkflowsDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

