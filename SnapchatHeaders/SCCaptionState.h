//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSString, SOJUCaptionStyle, UIColor;

@interface SCCaptionState : NSObject <NSObject, NSCopying>
{
    _Bool _hidden;
    _Bool _editing;
    _Bool _isTracking;
    long long _mode;
    NSString *_text;
    NSAttributedString *_attributedText;
    double _fontSize;
    double _editingFontSize;
    double _centerX;
    double _centerY;
    double _rotation;
    double _keyboardHeight;
    NSArray *_trackingTrajectory;
    SOJUCaptionStyle *_captionStyle;
    UIColor *_pickedColor;
    long long _uniqueId;
    NSDictionary *_taggedUsers;
    long long _userTaggingStartIndex;
}

+ (id)stateWithMode:(long long)arg1 text:(id)arg2 hidden:(_Bool)arg3;
@property(nonatomic) long long userTaggingStartIndex; // @synthesize userTaggingStartIndex=_userTaggingStartIndex;
@property(copy, nonatomic) NSDictionary *taggedUsers; // @synthesize taggedUsers=_taggedUsers;
@property(nonatomic) long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) UIColor *pickedColor; // @synthesize pickedColor=_pickedColor;
@property(retain, nonatomic) SOJUCaptionStyle *captionStyle; // @synthesize captionStyle=_captionStyle;
@property(copy, nonatomic) NSArray *trackingTrajectory; // @synthesize trackingTrajectory=_trackingTrajectory;
@property(nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(nonatomic) double editingFontSize; // @synthesize editingFontSize=_editingFontSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
