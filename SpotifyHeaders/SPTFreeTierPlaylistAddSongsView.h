//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class GLUEButton, GLUELabel, NSLayoutConstraint, NSString, SPTFreeTierPlaylistAddSongsViewStyle;

@interface SPTFreeTierPlaylistAddSongsView : UIView <GLUEStyleable>
{
    GLUEButton *_addSongsButton;
    GLUELabel *_educationalText;
    SPTFreeTierPlaylistAddSongsViewStyle *_style;
    NSLayoutConstraint *_educationalTextTopEdgeConstraint;
    NSLayoutConstraint *_educationalTextLeftEdgeConstraint;
    NSLayoutConstraint *_educationalTextRightEdgeConstraint;
    NSLayoutConstraint *_addSongsButtonTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *addSongsButtonTopConstraint; // @synthesize addSongsButtonTopConstraint=_addSongsButtonTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *educationalTextRightEdgeConstraint; // @synthesize educationalTextRightEdgeConstraint=_educationalTextRightEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *educationalTextLeftEdgeConstraint; // @synthesize educationalTextLeftEdgeConstraint=_educationalTextLeftEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *educationalTextTopEdgeConstraint; // @synthesize educationalTextTopEdgeConstraint=_educationalTextTopEdgeConstraint;
@property(copy, nonatomic) SPTFreeTierPlaylistAddSongsViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) GLUELabel *educationalText; // @synthesize educationalText=_educationalText;
@property(retain, nonatomic) GLUEButton *addSongsButton; // @synthesize addSongsButton=_addSongsButton;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)updateConstraints;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

