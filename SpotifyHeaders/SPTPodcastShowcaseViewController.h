//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GLUEThemeObserver.h"

@class SPTPodcastShowcaseView, SPTPodcastTheme;

@interface SPTPodcastShowcaseViewController : UIViewController <GLUEThemeObserver>
{
    id <SPTPodcastShowcaseViewControllerDelegate> _delegate;
    SPTPodcastTheme *_theme;
}

@property(readonly, nonatomic) SPTPodcastTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTPodcastShowcaseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)themeUpdated:(id)arg1;
- (void)didTapDismissButton:(id)arg1;
- (void)didTapActionButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTPodcastShowcaseView *view; // @dynamic view;

@end

