//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCNavigationBar;

@interface SCNavigationView : UIView
{
    UIView *_contentView;
    SCNavigationBar *_navigationBar;
    double _topLayoutInset;
}

@property(nonatomic) double topLayoutInset; // @synthesize topLayoutInset=_topLayoutInset;
@property(readonly, nonatomic) SCNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithContentView:(id)arg1;

@end

