//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoAdContentViewDelegate.h"

@class FBAdVideoLogger, FBInstreamAdDataModel, FBVideoAdContentView, NSString, UIViewController;

@interface FBVideoAdController : NSObject <FBVideoAdContentViewDelegate>
{
    _Bool _contentViewLoaded;
    _Bool _contentViewEnded;
    _Bool _started;
    FBVideoAdContentView *_contentView;
    id <FBVideoAdControllerDelegate> _delegate;
    FBInstreamAdDataModel *_dataModel;
    FBAdVideoLogger *_logger;
    UIViewController *_rootViewController;
}

@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) FBAdVideoLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) FBInstreamAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) _Bool contentViewEnded; // @synthesize contentViewEnded=_contentViewEnded;
@property(nonatomic) _Bool contentViewLoaded; // @synthesize contentViewLoaded=_contentViewLoaded;
@property(nonatomic) __weak id <FBVideoAdControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBVideoAdContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)contentView:(id)arg1 didFailWithError:(id)arg2;
- (void)contentViewDidUnload:(id)arg1;
- (void)contentViewDidEnd:(id)arg1;
- (void)contentViewDidClickthrough:(id)arg1;
- (void)contentViewDidSkip:(id)arg1;
- (void)contentViewDidResume:(id)arg1;
- (void)contentViewDidPause:(id)arg1;
- (void)contentViewDidProgress:(id)arg1;
- (void)contentViewDidLoad:(id)arg1;
- (void)handleViewableImpression;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (void)loadAdFromDataModel:(id)arg1;
- (_Bool)isNetworkOnline;
- (void)dealloc;
- (_Bool)isDataModelValid;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

