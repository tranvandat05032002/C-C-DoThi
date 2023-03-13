package com.tv.sv.models;

public class NganhHoc extends SinhVienMethod {
	private int maNganh;
	private String tenNganh;
	public NganhHoc(int maNganh, String tenNganh){
		this.maNganh = maNganh;
		this.tenNganh = tenNganh;
	}
	public String getTenNganh() {
		return this.tenNganh;
	}
	public int getMaNganh() {
		return this.maNganh;
	}
	public String getThongTin() {
		return this.maNganh + "\t\t" + this.tenNganh; 
	}
}
