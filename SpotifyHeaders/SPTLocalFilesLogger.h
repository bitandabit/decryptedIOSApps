//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface SPTLocalFilesLogger : NSObject
{
    id <SPTLogCenterProtocol> _logCenter;
    NSURL *_viewURI;
}

@property(copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIInteractionWithSectionIndex:(long long)arg1 itemIndex:(long long)arg2 interactionType:(id)arg3 userIntent:(id)arg4;
- (void)logUIInteractionWithInteractionType:(id)arg1 userIntent:(id)arg2;
- (void)logUIInteractionWithPageURI:(id)arg1 interactionType:(id)arg2 userIntent:(id)arg3;
- (void)logUIImpressionWithSectionIndex:(long long)arg1 itemIndex:(long long)arg2 impressionType:(id)arg3;
- (void)logUIImpressionWithPageURI:(id)arg1 impressionType:(id)arg2;
- (void)logJobFinishedWithNumberOfPlaylistsImported:(long long)arg1 numberOfPlaylistsFound:(long long)arg2 numberOfPlaylistsTracksImported:(long long)arg3 numberOfPlaylistsTracksFound:(long long)arg4 numberOfSongsImported:(long long)arg5 numberOfSongsFound:(long long)arg6 canceled:(_Bool)arg7 importStartedAt:(id)arg8 itemsPresentedAt:(id)arg9;
- (void)logFlowSortContentWithSection:(long long)arg1 andColumn:(id)arg2;
- (void)logFlowSearchContentWithSection:(long long)arg1;
- (void)logFlowAllContentAlreadyImportedDialogShown;
- (void)logFlowNoContentDialogShown;
- (void)logFlowDiscardDialogContinued;
- (void)logFlowDiscardDialogDiscarded;
- (void)logFlowDiscardWithChanges:(_Bool)arg1;
- (void)logFlowPageChangedWithSection:(long long)arg1;
- (void)logFlowSelectItem:(_Bool)arg1 atIndex:(long long)arg2 forSection:(long long)arg3;
- (void)logFlowSelectAllButtonSelected:(_Bool)arg1;
- (void)logFlowImportStartedWithTargetURI:(id)arg1;
- (void)logFlowImportButtonClickedInViewURI:(id)arg1;
- (void)logFlowImportButtonShownInViewURI:(id)arg1;
- (id)initWithLogCenter:(id)arg1;

@end

