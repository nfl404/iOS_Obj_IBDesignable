//
//  UIView+NP.h
//  iOS_Obj_IBDesignable
//
//  Created by Mr nie on 16/5/18.
//  Copyright © 2016年 程序猿:NiePlus   博客地址:http://nieplus.blog.com. All rights reserved.
//

#import <UIKit/UIKit.h>
IB_DESIGNABLE
@interface UIView (NP)

/*
 * 1.category中添加IBInspectable修饰属性，必须带有set和get的方法，不然编译都通过。
 * 2.KVC观察属性值变化，从而得到即时刷新效果。
 * 3.category中自定义属性如上边defineValue属性，使用runtime方式赋值。
 */


/** 圆角 **/
@property (nonatomic, assign) IBInspectable CGFloat cornerRadius;
/** 边框高度 **/
@property (nonatomic, assign) IBInspectable CGFloat borderWidth;
/** 边框颜色 **/
@property (nonatomic, assign) IBInspectable UIColor *borderColor;
/** 定义值 **/
@property (nonatomic, assign) IBInspectable CGFloat defineValue;


@end
