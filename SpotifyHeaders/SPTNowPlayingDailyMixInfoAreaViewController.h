//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseInfoAreaViewController.h"

@class SPTNowPlayingLogger, SPTNowPlayingModel;

@interface SPTNowPlayingDailyMixInfoAreaViewController : SPTNowPlayingBaseInfoAreaViewController
{
    SPTNowPlayingModel *_model;
    id <SPContextMenuFeature> _contextMenu;
    SPTNowPlayingLogger *_logger;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
}

@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)presentContextMenuForTrackMetadata:(id)arg1 senderView:(id)arg2;
- (void)contextMenuPressed:(id)arg1;
- (void)addToCollectionPressed:(id)arg1;
- (id)initWithModel:(id)arg1 theme:(id)arg2 contextMenuFeature:(id)arg3 logger:(id)arg4 collectionTestManager:(id)arg5;

@end

