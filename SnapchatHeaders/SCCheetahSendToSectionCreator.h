//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSString, SCCheetahSendToLogger, SCCheetahSendToPreviewMessageCollector, SCCheetahSendToRecipientDataProvider, SCCheetahSendToStoryDataSource, SCUserSession;
@protocol SCSearchActionHandling, SCSendPreviewViewModel, SCUserSelectionManaging;

@interface SCCheetahSendToSectionCreator : NSObject <SCSearchSectionCreating>
{
    SCUserSession *_userSession;
    id <SCSearchActionHandling> _actionHandler;
    SCCheetahSendToRecipientDataProvider *_dataProvider;
    SCCheetahSendToStoryDataSource *_storyDataSource;
    id <SCUserSelectionManaging> _selectionStateManager;
    SCCheetahSendToPreviewMessageCollector *_previewMsgCollector;
    SCCheetahSendToPreviewMessageCollector *_userTextMsgCollector;
    id <SCSendPreviewViewModel> _previewMediaSource;
    _Bool _newUserTooltipEnabled;
    SCCheetahSendToLogger *_logger;
}

- (void).cxx_destruct;
- (id)_createRecencyBasedSectionWithHeader:(id)arg1;
- (id)_createSuggestedSectionWithHeader:(id)arg1;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithUserSession:(id)arg1 actionHandler:(id)arg2 dataProvider:(id)arg3 storyDataSource:(id)arg4 selectionStateManager:(id)arg5 previewMsgCollector:(id)arg6 userTextMsgCollector:(id)arg7 previewMediaSource:(id)arg8 newUserTooltipEnabled:(_Bool)arg9 logger:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

