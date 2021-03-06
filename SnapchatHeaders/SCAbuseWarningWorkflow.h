//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCAbuseReportUserInteractionDelegate-Protocol.h"

@class NSString, SCAbuseWarningService;
@protocol SCAbuseWarningRepository, SCAbuseWarningWorkflowDelegate;

@interface SCAbuseWarningWorkflow : NSObject <SCAbuseReportUserInteractionDelegate>
{
    id <SCAbuseWarningRepository> _abuseWarningRepository;
    SCAbuseWarningService *_abuseWarningService;
    id <SCAbuseWarningWorkflowDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)userAcknowledgedAbuseReport;
- (id)initWithAbuseWarningRepository:(id)arg1 abuseWarningService:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

