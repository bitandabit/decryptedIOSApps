//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryLeftSwipableViewController.h"

#import "SCCloudSyncStatusListener-Protocol.h"
#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"
#import "SCTimeProfilable-Protocol.h"

@class NSArray, NSString, NSTimer, SCCloudSyncOperation, SCGalleryBackupFailedView, SCGradientView, SCHeader, SCLoadingIndicatorView, SCUserSession, UIButton, UILabel, UIProgressView, UITextView, UIView;
@protocol SCCanceling, SCObserving;

@interface SCGalleryBackupViewController : SCGalleryLeftSwipableViewController <SCHeaderDelegate, SCHeaderDataSource, SCNetworkConnectivityListener, SCCloudSyncStatusListener, SCTimeProfilable>
{
    SCUserSession *_userSession;
    _Bool _setIsBackupNowOnAppear;
    SCHeader *_header;
    NSString *_headerLabel;
    UILabel *_snapsLeftView;
    UIProgressView *_progressBar;
    UIButton *_overrideButton;
    SCGradientView *_bottomGradient;
    SCGradientView *_topGradient;
    _Bool _savedStatusHidden;
    long long _savedStatusStyle;
    id <SCObserving> _observeContext;
    id <SCObserving> _backupOnCellularObserveContext;
    unsigned long long _snapsLeft;
    UITextView *_debugView;
    UIView *_backgroundView;
    UIView *_contentView;
    _Bool _headerTransparent;
    SCLoadingIndicatorView *_spinner;
    _Bool _backupOnCellular;
    _Bool _isBackupNow;
    _Bool _travelModeEnabled;
    long long _networkConnectivityStatus;
    NSTimer *_progressTimer;
    double _startUploadTime;
    double _estimatedUploadTime;
    SCGalleryBackupFailedView *_backupFailedView;
    NSArray *_failedEntries;
    SCCloudSyncOperation *_firstOperation;
    NSString *_currentBackgroundOperationId;
    id <SCCanceling> _thumbnailRequest;
}

+ (int)context;
- (void).cxx_destruct;
- (void)dealloc;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)fontForHeader:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)leftButtonPressed;
- (void)_attachStoryBackgroundViewForOperation:(id)arg1;
- (void)_attachEntryBackgroundViewWithSnaps:(id)arg1 snapDetails:(id)arg2;
- (void)_attachBackupFailedView;
- (void)_attachPrivateBackgroundView;
- (void)_attachCompleteBackgroundView;
- (void)_attachContentView:(id)arg1;
- (void)_setHeaderTransparent:(_Bool)arg1;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (void)_updateNetworkConnectivityStatus:(long long)arg1;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)_updateStatusText;
- (void)_cleanupSpinner;
- (void)_ensureSpinner;
- (void)_updateUIWithStatusChanges;
- (void)_updateSnapsLeft;
- (void)_updateOperations;
- (void)_updateFailedEntries;
- (double)_estimateUploadTimeForOperation:(id)arg1;
- (void)_setIsBackupNow:(_Bool)arg1;
- (void)_overridePressed:(id)arg1;
- (void)_updateProgressBar;
- (_Bool)_needsWaitWiFi;
- (void)_timerFired:(id)arg1;
- (void)_stopProgress;
- (void)_startProgress;
- (void)_resetProgress;
- (_Bool)_canMakeProgress;
- (void)_updateOverrideButton;
- (void)initHeader;
- (void)initGradients;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_doubleTap:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)getPageViewName;
- (id)pageName;
- (id)initWithUserSession:(id)arg1 setIsBackupNowOnAppear:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

